#ifdef LODEPNGDLL_EXPORTS
#define LODEPNGDLL_API __declspec(dllexport)
#else
#define LODEPNGDLL_API __declspec(dllimport)
#endif

//// This class is exported from the lodepngdll.dll
//class LODEPNGDLL_API Clodepngdll {
//public:
//	Clodepngdll(void);
//	// TODO: add your methods here.
//};
//
//extern LODEPNGDLL_API int nlodepngdll;
//
//LODEPNGDLL_API int fnlodepngdll(void);
