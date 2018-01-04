#ifndef __FILETEST_H_INCLUDE__
#define __FILETEST_H_INCLUDE__

struct TestInfo{
	int mCycles;
	int mPackageSize;
	long long mFileSize;
};

struct TestResult{
	double mWriteSpeed;
	double mReadSpeed;
};

//���Կ��ٶ�
//dirpath:		���Ĺ��ص�·��
//test_result:	���ڴ�Ų��Խ��
//test_info:	ָ�����Է�ʽ����ΪNULL����Ĭ�Ϸ�ʽ����
//status:		�������״̬����λ����Ŀǰδʹ��
//����ֵ��		true��ʾ���Գɹ���false��ʾ���Թ����д��ڴ���
extern "C" bool Get_Card_Speed(char *dirpath, struct TestResult *test_result, struct TestInfo* test_info, int *status);

//�Կ�����һ��ȫ�̼��
//dirpath:		���Ĺ��ص�·��
//status:		�������״̬����λ����Ŀǰδʹ��
//����ֵ��		true��ʾ���Գɹ���false��ʾ���Թ����д��ڴ���
extern "C" bool Check_Card_Ok(char *dirpath, int *status);

#endif