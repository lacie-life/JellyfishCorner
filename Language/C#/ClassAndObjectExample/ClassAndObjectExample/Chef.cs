using System;
using System.Collections.Generic;
using System.Text;

namespace ClassAndObjectExample
{
    class Chef
    {

        public void MakeJun()
        {
            Console.WriteLine("Jun");
        }

        public void MakeFIsh()
        {
            Console.WriteLine("Fish");
        }

        public virtual void MakeSpecialDish()
        {
            Console.WriteLine("JellyFish");
        }
    }
}
