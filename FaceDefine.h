#ifndef __FACEDEFINE_H__
#define __FACEDEFINE_H__		1

#define MES_FILE_HEADER			"Human Face Mesh"//msh�ļ�ͷ
const int TEXTURE_WIDTH = 512;
const int TEXTURE_HEIGHT = 512;
const float LIGHT_RADIUS = 5000.0f;

enum SHOWMODELTYPE//show model type
{
	SFM_NONE,		//show none
	SFM_VERTICES,	//show vertices
	SFM_MESH,		//show mesh
	SFM_RENDER,		//show render
	SFM_TEXTURE,	//show texture
};

typedef struct POINT3D
{
	float x;//x����
	float y;//y����
	float z;//z����
}POINT3D;

typedef struct TRIANGLE
{
	int first;//��һ���������
	int second;//�ڶ����������
	int third;//�������������
}TRIANGLE;

typedef struct FACESTRUCTURE
{
	int	totalVertices;//��������
	int totalFaces;//������
	int totalFeatures;//��������
	POINT3D *coordinate;//��������
	TRIANGLE *faces;//��Ķ���
	int *features;//������
}FACESTRUCTURE;

#endif