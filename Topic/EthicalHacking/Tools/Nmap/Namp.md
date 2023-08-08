### Scanning Techniques of Nmap

#### Basics command
1. UDP Scan (-sU)

This technique is used to scan the open UDP ports of the target IP/host. Here, UDP scan sends UDP Packets to every ports of the target and waits till it get response. If, it receives error message stating that the ICMP is unreachable, this means that the port is closed. But, if gets any approachable response, then it means the port is open.

2. FIN Scan (-sF)

In Fin Scan technique, packets are sent with a Fin Flag. Sometimes, because of firewall, SYN Packets might be blocked. In such case, FIN Scan works by by passing the firewall. FIN packets are send to closed ports, if no response is received, it is because either the packet is dropped by firewall or the port is open.

3. Ping Scan (-sP)

This technique is only used to find out whether the host is available or not. Ping Scan is not used to detect open ports. It sends ICMP echo request and in return gets ICMP echo reply is the host is alive.

4. TCP SYN Scan (-sS)

In this technique, Nmap sends SYN packets to the destination, but does not create any session. As a result, target computer won’t be able to create any log of interaction as no session was initiated.

5. TCP Connect() Scan (-sT)

UNIX socket uses a system call named connect() to begin TCP connection and if it succeeds, connection can be made and if it fails, connections cannot be made, basically because the port might be closed.

6. Version Detection (-sV)

This technique is used to find out about specific service running on open port, it’s version and product Name. It is not used to detect open ports. However, this scan needs open ports in order to detect the version. It uses TCP SYN scan to know about the open ports.

7. Idle Scan (-sI)

Idle scan is an advance scan that does not send any packets from your IP address, instead it uses another host from the target network to send the packets.

### CVE detection 

One of Nmap’s greatest features that not all the network and systems administrators know about is something called “Nmap Scripting Engine” (known as NSE). This scripting engine allows users to use a pre-defined set of scripts, or write their own using Lua programming language.

Using Nmap scripts is crucial in order to automate system and vulnerability scans. For example, if you want to run a full vulnerability test against your target, you can use these parameters:One of Nmap’s greatest features that not all the network and systems administrators know about is something called “Nmap Scripting Engine” (known as NSE). This scripting engine allows users to use a pre-defined set of scripts, or write their own using Lua programming language.

Using Nmap scripts is crucial in order to automate system and vulnerability scans. For example, if you want to run a full vulnerability test against your target, you can use these parameters:

```
nmap -Pn --script vuln 192.168.1.105
```

### Launching DOS with Nmap

```
nmap 192.168.1.105 -max-parallelism 800 -Pn --script http-slowloris --script-args http-slowloris.runforever=true
```

### Launching brute force attacks

- WordPress brute force attack:

```
nmap -sV --script http-wordpress-brute --script-args 'userdb=users.txt,passdb=passwds.txt,http-wordpress-brute.hostname=domain.com, http-wordpress-brute.threads=3,brute.firstonly=true' 192.168.1.105
```

- Brute force attack against MS-SQL

```
nmap -p 1433 --script ms-sql-brute --script-args userdb=customuser.txt,passdb=custompass.txt 192.168.1.105
```

- FTP brute force attack:

```
nmap --script ftp-brute -p 21 192.168.1.105
```

### Detecting malware infections on remote hosts

```
nmap -sV --script http-malware-host 192.168.1.105
```
## Nmap Firewall and IDS Evasion

1. Fragment Packets

This technique was very effective especially in the old days however you can still use it if you found a firewall that is not properly configured. The Nmap offers that ability to fragment the packets while scanning with the -f option so it can bypass the packet inspection of firewalls.

2. Specify a specific MTU

Nmap is giving the option to the user to set a specific MTU (Maximum Transmission Unit) to the packet.This is similar to the packet fragmentation technique that we have explained above.During the scan that size of the nmap will create packets with size based on the number that we will give.In this example we gave the number 24 so the nmap will create 24-byte packets causing a confusion to the firewall.

Have in mind that the MTU number must be a multiple of 8 (8,16,24,32 etc). You can specify the MTU of your choice with the command –mtu number target.

3. Use Decoy addresses

In this type of scan you can instruct Nmap to spoof packets from other hosts.In the firewall logs it will be not only our IP address but also and the IP addresses of the decoys so it will be much harder to determine from which system the scan started.

There are two options that you can use in this type of scan:

nmap -D RND:10 [target] (Generates a random number of decoys)

nmap -D decoy1,decoy2,decoy3 etc. (Manually specify the IP addresses of the decoys)

4. Idle Zombie Scan

This technique allows you to use another host on the network that is idle in order to perform a port scan to another host.The main advantage of this method is that it very stealthy because the firewall log files will record the IP address of the Zombie and not our IP.

However in order to have proper results we must found hosts that are idle on the network.

Metasploit framework has a scanner that can help us to discover hosts that are idle on the network and it can be used while implementing this type of scan.

```
nmap -sI [Zombie IP] [Target IP]
```

5. Source port number specification

A common error that many administrators are doing when configuring firewalls is to set up a rule to allow all incoming traffic that comes from a specific port number.

The –source-port option of Nmap can be used to exploit this misconfiguration.Common ports that you can use for this type of scan are: 20,53 and 67.

6. Append Random Data

Many firewalls are inspecting packets by looking at their size in order to identify a potential port scan.This is because many scanners are sending packets that have specific size.

In order to avoid that kind of detection you can use the command –data-length to add additional data and to send packets with different size than the default.

7. Scan with Random Order

In this technique you can scan a number of hosts in random order and not sequential.The command that you use to instruct Nmap to scan for host in random order is –randomize-hosts.

This technique combined with slow timing options in nmap command can be very effective when you don’t want to alert firewalls.

8. MAC Address Spoofing

Another method for bypassing firewall restrictions while doing a port scan is by spoofing the MAC address of your host.This technique can be very effective especially if there is a MAC filtering rule to allow only traffic from certain MAC addresses so you will need to discover which MAC address you need to set in order to obtain results.

Specifically the –spoof-mac option gives you the ability to choose a MAC address from a specific vendor,to choose a random MAC address or to set a specific MAC address of your choice.

Another advantage of MAC address spoofing is that you make your scan more stealthier because your real MAC address it will not appear on the firewall log files.

Specify MAC address from a Vendor —-> –spoof-mac Dell/Apple/3Com

Generate a random MAC address —-> —spoof-mac 0

Specify your own MAC address —-> —spoof-mac 00:01:02:25:56:AE

9. Send Bad Checksums

Checksums are used by the TCP/IP protocol to ensure the data integrity.However sending packets with incorrect checksums can help you to discover information from systems that is not properly configured or when you are trying to avoid a firewall.

You can use the command nmap –badsum IP in order to send packets with bad checksums to your targets.

In the image below we didn’t get any results.This means that the system is suitable configured.

