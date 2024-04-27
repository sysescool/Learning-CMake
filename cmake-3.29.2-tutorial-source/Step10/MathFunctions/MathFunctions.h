// TODO 3
// 不同的平台导出不同定义
#if defined(_WIN32)
#  if defined(EXPORTING_MYMATH)
#    define DECLSPEC __declspec(dllexport)
#  else
#    define DECLSPEC __declspec(dllimport)
#  endif
#else // non windows
#  define DECLSPEC
#endif
namespace mathfunctions {
double DECLSPEC sqrt(double x);
}




// namespace mathfunctions {
// double sqrt(double x);
// }
