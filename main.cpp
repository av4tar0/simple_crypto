#include <iostream>

class Hash {
	char* hash = nullptr;
	char* line = nullptr;

	size_t size_line;

public:

	Hash(const char* _line, int _size_line) :

		line(const_cast<char*>(_line)),
		size_line(_size_line)
	{};

	~Hash() {
		delete[] hash;
		delete[] line;
	}

	const char* encoder() {

		if (hash != nullptr) 
			delete[] hash;
		hash = new char[size_line+1];
		for (int i = 0; i < size_line; i++) {

				hash[i] = line[i] + 5;
		}
		hash[size_line] = '\0';
		return hash;
	}

	const char* decoder() {

		if (line == nullptr)
			delete[] line;
		line = new char[size_line + 1];
		for (int i = 0; i < size_line; i++) {

				line[i] = hash[i] - 5;
		}
		line[size_line] = '\0';
		return line;
	}
};

int main() {
  Hash obj;
}
