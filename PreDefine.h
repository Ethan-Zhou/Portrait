#ifndef   _PRE_DEFINE_H_
#define  _PRE_DEFINE_H_

/////////////////////////////////////////////////////////////////
//�� �� ����   PreDefine.h                                     //
//�ļ�������   ����SDKԤ����ͷ�ļ�                             //
//����ļ���   fdapi.h                                         //
//             fllapi.h                                        //
//             ftemapi.h                                       //
//��    �ߣ�   �����񡢳½ܡ�ţ־�㡢�ܲ�                      //
//�� �� ����   Visual C++ 6.0                                  //
//��    Ȩ��   �п�Ժ������JDLʵ����                           //
//��Ȩ˵����   �κ�ʹ�ñ��뱣����Ȩ��Ϣ����ʷ��¼��Ϣ          //
//�޸ļ�¼��                                                   //
//  ��  ��        �汾      �޸���         �޸�����            //
//  07/07/2005    1.0       �����񡢳½�   ����                //
/////////////////////////////////////////////////////////////////

//���㷨�Ĵ��󷵻���Ϣ
enum FaceAlgError
{
  // 1 ��100 ��ͨ�õ��쳣��Ϣ
  // ������(2005-07-07)
  errNone = 0,                             //���쳣
  errNullArithmetic = 1,                   //�㷨δʵ�֣����㷨
  errFileNotExist = 2,                     //�ļ�������
  errInvalidFileFormat = 3,                //�ļ���ʽ�Ƿ�
  errUnInit = 4,                           //�㷨û�г�ʼ��
  errNotEnoughMemory = 5,                  //�ڴ治��
  errInvalidArgument = 6,                  //�Ƿ��������
  errInvalidClose = 7,                     //�޷�ע��

  // 100 ��199 ����������㷨�쳣��Ϣ
  // �½� (2005-07-07)
  errDetectOther =100,                     //δ֪�ļ���㷨�쳣(ģ���ڱ�����try ���������쳣)
  errIntegralOverflow = 101,               //����ͼ����ʱ�������
  errComputeFeatureValue = 102,            //��������ֵʱԽ�磬����˵ѵ���õ�����������
  errRemoveOverlaps = 103,                 //ȥ���ؿ�ʱ����
  errTooManyFindFace = 104,                //���ص�������Ŀ������������ֵ
  errDetectProcess = 105,                  //���������̳�������
  errNoDetect = 106,                       //û�н����������ֱ�ӵ����˺���FDGetFaces

  // 200 ��299 �������㶨λ�㷨���쳣��Ϣ
  // ţ־�� (2005-07-07)
  errLocationgOther = 200,                 //δ֪�Ķ�λ�㷨�쳣(ģ���ڱ�����try���������쳣)
  errIntegralImageOverflow = 201,          //����ͼ���
  errInvalidDetectionPosition = 202,       //��ȡ���λ��ʧ��
  errLocalizationFailed = 203,             //��λʧ��
  errInputImageFormatInvalid =204,         //��Ч������ͼ�����ݸ�ʽ
  
  // 300 ��399 ������ģ����ȡ��ƥ���㷨���쳣��Ϣ
  // �ܲ� (2005-07-07)
  errRecognizeOther = 300,                //δ֪���㷨�쳣(ģ���ڱ�����try���������쳣)
  errFaceOutBorder = 301                  //������Χ
};

//ͼ����ɫ��ȣ�ĿǰҪ������㷨����֧��24λ���ɫ��8λ�Ҷ�ͼ��
enum BitsPerPixel
{
  Gray8 = 8,                  // 8λ �Ҷ�
  Color24 = 24                //24λ ���
};

//������
enum LandmarkNames
{
  LeftEyeCenter = 1,          // �������루ָͼ����ߣ�
  RightEyeCenter = 2,         // �������루ָͼ���ұߣ�
  NoseTip = 3,                // �Ǽ�
  LeftMouthCorner = 4,        // ����ǣ�ָͼ����ߣ�
  RightMouthCorner = 5,       // ����ǣ�ָͼ���ұߣ�
  MouthCenter = 6             // ������
};

//������Ϣ
typedef struct
{
  int nLeft;                  // �������ο����ϵ�X����
  int nTop;                   // �������ο����ϵ�Y����
  int nWidth;                 // �������ο���
  int nHeight;                // �������ο�߶�
  double lfConfidence;        // ���Ŷȣ���Χ��0��+1.0֮��
}FACEINFO;

//������ͳ����Ϣ
typedef struct
{
  double lfXMean;             // X��ֵ
  double lfXVar;              // X����
  double lfYMean;             // Y��ֵ
  double lfYVar;              // Y����
}FDSTATISTICS;

//��������Ϣ
typedef struct
{
  LandmarkNames enumLandmark; // ָ��ĳ�������㣬�ο�ǰ���ö��ֵLandmarkNames
  int x;                      // X����
  int y;                      // Y����
  double lfConfidence;        // ���Ŷȣ���Χ��0��+1.0֮��
}LANDMARKINFO;
 
#endif//_PRE_DEFINE_H_