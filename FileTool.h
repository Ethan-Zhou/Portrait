/*
* 
* �ļ����ƣ�FileTool.h
* �ļ���������Ҫʵ���ļ��ļ��ܴ洢���򿪡��رա���ȡ��д��
* 
*/
#ifndef FILE_H
#define FILE_H

class FileTool  
{
public:
	DWORD GetFileSize();
	BOOL WriteEnd();
	BOOL WriteString(char *buf);
	BOOL WriteFile(char * inbuf, int len);
	BOOL CopyFile(LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName,  BOOL bFailIfExists);
	BOOL CopyDir(char * dst, char *src);
	BOOL WriteLine(char * inbuf, int len);
	BOOL CloseFile();
	HANDLE fHandle;
	
	int ReadLine(char * szFileName, char * outBuf);
	//�����ļ�,�������Ϊ�ļ���
	BOOL DeCryptFile(char * pFileName);
	//�����ļ�,�������Ϊ�ļ���
	BOOL EncryptFile(char * pFileName);
	BOOL OpenFile(char * szFileName);
	FileTool(); 
	virtual ~FileTool();

};

#endif
