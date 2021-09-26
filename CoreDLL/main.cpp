// CoreDLL Project Main CPP
// Output => Exports DLL

__declspec(dllexport) int sum(int a, int b)
{
	return a + b;
}