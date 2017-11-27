using System;
using System.Collections;
using System.Collections.Generic;

namespace StandardLibrary
{
    public class Class1
    {
        public static int Seed()
        {
            return 12;
        }


        public static bool IsPrime(int n)
        {
            var nativeObject = new WindowsRuntimeComponent.Class1();
            return nativeObject.IsPrime(n);
        }
    }
}
