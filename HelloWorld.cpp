#include <iostream>

inline void LogGitCommitHash() {
	#ifndef GIT_COMMIT_HASH
	#define GIT_COMMIT_HASH "0000000" // 0000000 means uninitialized
	#endif
	    std::cout << "GIT_COMMIT_HASH[" << GIT_COMMIT_HASH << "]\n"; // 4f34ee8
}
int main (int argc, char** argv)
{

	LogGitCommitHash();

	return 0;
}
