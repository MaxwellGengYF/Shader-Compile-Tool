#pragma once
#include <iostream>
#include <string>
#include <vector>
enum class ShaderType : uint16_t
{
	ComputeShader = 0,
	VertexShader = 1,
	PixelShader = 2,
	HullShader = 3,
	DomainShader = 4,
	GeometryShader = 5
};
struct Command
{
	std::string filePath;
	std::string fileName;
	std::string functionName;
	std::string resultFileName;
	ShaderType shaderType;
	bool isDebug;
};
class ICompileIterator
{
public:
	virtual std::vector<Command>& GetCommand() = 0;
	virtual void UpdateCommand() = 0;
	virtual ~ICompileIterator() {}
};