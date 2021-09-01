using System;
using System.Collections.Generic;
using System.Text;

namespace ClassAndObjectExample
{
    class Student
    {
        public string name;
        public string major;
        public double gpa;

        public Student(string aName, string aMajor, double aGpa)
        {
            this.name = aName;
            this.major = aMajor;
            this.gpa = aGpa;
        }

        public bool HasHonors()
        {
            if (gpa >= 4.0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
