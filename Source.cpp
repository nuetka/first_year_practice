//#include <string>
//std::string& Convert_String_to_string(System::String^ s, std::string& os);
//
//std::string& Convert_String_to_string(System::String^ s, std::string& os) {
//	using namespace System::Runtime::InteropServices;
//	const char* chars =
//		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
//	os = chars;
//	Marshal::FreeHGlobal(System::IntPtr((void*)chars));
//	return os;
//}