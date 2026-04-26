using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace FormCSharp
{
    internal static class CppFunc
    {
        private const string DLLPATH = "DllCpp.dll";
        [DllImport(DLLPATH)]
        public static extern void MemoryLeak();
    }
}
