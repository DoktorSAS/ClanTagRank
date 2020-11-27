#pragma once

namespace command
{
	class params
	{
	public:
		int size();
		const char* get(int index);
		std::string join(int index);

		const char* operator[](const int index)
		{
			return this->get(index);
		}
	};

	class params_sv
	{
	public:
		int size();
		const char* get(int index);
		std::string join(int index);

		const char* operator[](const int index)
		{
			return this->get(index);
		}
	};

	void init();

	void add_raw(const char* name, void (*callback)());
	void add(const char* name, std::function<void(params&)> callback);
	void add_sv(const char* name, std::function<void(int, params_sv&, std::function<void()>)> callback);
}