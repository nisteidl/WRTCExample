using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace CoreUnitTest
{
    [TestClass]
    public class CoreUnitTest1
    {
        [TestMethod]
        public void TestMethod1()
        {
            Assert.IsTrue(StandardLibrary.Class1.IsPrime(3));
        }
    }
}
