using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Wrapper;

namespace Managed
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("---------Start---------");

            var wrapper = new WrapperClass();
            wrapper.Run();
            Console.WriteLine("---------End---------");
        }
    }
}
