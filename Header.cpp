#include "Header.h"
#include  <algorithm>.

std::string& Convert_String_to_string(System::String^ s, std::string& os) {
	using namespace System::Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(System::IntPtr((void*)chars));
	return os;
}

System::String ^ Convert_string_to_String(std::string & os, System::String ^ s) {
s = gcnew System::String(os.c_str());

		return s;
}

System::String^ Convert_string_to_String(std::string& os) {
	System::String^ s = gcnew System::String(os.c_str());
	
		return s;
}

bool check_int(std::string text, int a, int b) {
	bool fehler = false;
	if (text[0] == ' ') {
		fehler = true;
	}
	int num;
	 
	try {
		num = std::stoi(text);
	}
	catch (std::invalid_argument&)

	{ 
		fehler = true;
	}

	if (text != std::to_string(num)) {

		fehler = true;
	}
	
	if (!(num >= a && num <= b)) {
		fehler = true;
	}

	if (fehler) return false;
	else return true;
}

	bool check_double(std::string text, double a, double b) {
		char* end;
		double result;
		if (text[0] == ' ') return false;
		result = strtod(text.c_str(), &end);
		if (end == text.c_str() || *end != '\0') return false;
		if (!(result >= 1 && result <= 100)) return false;
		return true;
	}
	
