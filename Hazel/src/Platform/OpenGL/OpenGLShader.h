#pragma once

#include "Hazel/Renderer/Shader.h"
#include <glm/glm.hpp>

namespace Hazel {

	class OpenGLShader : public Shader
	{
	public:
		OpenGLShader(const std::string& vertexSrc, const std::string& fragmentSrc);
		virtual ~OpenGLShader();

		virtual void Bind() const override;
		virtual void Unbind() const override;

		void UploadeUniformInt(const std::string& name, const int value);

		void UploadeUniformFloat(const std::string& name, const float value);
		void UploadeUniformFloat2(const std::string& name, const glm::vec2& values);
		void UploadeUniformFloat3(const std::string& name, const glm::vec3& values);
		void UploadeUniformFloat4(const std::string& name, const glm::vec4& values);

		void UploadeUniformMat3(const std::string& name, const glm::mat3& matrix);
		void UploadeUniformMat4(const std::string& name, const glm::mat4& matrix);
	private:
		uint32_t m_RendererID;

	};

}