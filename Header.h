#pragma once
#include <string>
#include <stdexcept>

std::string& Convert_String_to_string(System::String^ s, std::string& os);

System::String^ Convert_string_to_String(std::string& os, System::String^ s);

System::String^ Convert_string_to_String(std::string& os);

bool check_int(std::string text, int a, int b);
bool check_double(std::string text, double a, double b);

