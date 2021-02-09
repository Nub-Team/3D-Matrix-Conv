#pragma once

struct CpuGpuMat {
  	void* cpuP;		
	void* gpuP;		
	int Rows;
	int Cols;
	int Depth;
	int Size;		
};
