#pragma once
#include <fstream>
#include "Header.h"

class LoggerManager
{
public:
	LoggerManager();
	~LoggerManager();

	void TraceText(const std::string& Content);
	void TraceInfo(const std::string& Content);
	void TraceWarn(const std::string& Content);
	void TraceError(const std::string& Content, BOOLEAN bReport = TRUE);

	void Close();

private:
	std::mutex Mutex;
	std::ofstream File;

};