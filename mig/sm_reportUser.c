/*
 * IDENTIFICATION:
 * stub generated Wed Sep  7 11:48:19 2016
 * with a MiG generated by bootstrap_cmds-93
 * OPTIONS: 
 *	KernelUser
 */
#define	__MIG_check__Reply__sm_report_subsystem__ 1

#include "sm_report.h"


#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef	__MachMsgErrorWithTimeout
#define	__MachMsgErrorWithTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	case MACH_SEND_TIMED_OUT: \
	case MACH_RCV_TIMED_OUT: \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithTimeout */

#ifndef	__MachMsgErrorWithoutTimeout
#define	__MachMsgErrorWithoutTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithoutTimeout */

#ifndef	__DeclareSendRpc
#define	__DeclareSendRpc(_NUM_, _NAME_)
#endif	/* __DeclareSendRpc */

#ifndef	__BeforeSendRpc
#define	__BeforeSendRpc(_NUM_, _NAME_)
#endif	/* __BeforeSendRpc */

#ifndef	__AfterSendRpc
#define	__AfterSendRpc(_NUM_, _NAME_)
#endif	/* __AfterSendRpc */

#ifndef	__DeclareSendSimple
#define	__DeclareSendSimple(_NUM_, _NAME_)
#endif	/* __DeclareSendSimple */

#ifndef	__BeforeSendSimple
#define	__BeforeSendSimple(_NUM_, _NAME_)
#endif	/* __BeforeSendSimple */

#ifndef	__AfterSendSimple
#define	__AfterSendSimple(_NUM_, _NAME_)
#endif	/* __AfterSendSimple */

#define msgh_request_port	msgh_remote_port
#define msgh_reply_port		msgh_local_port



#if ( __MigTypeCheck )
#if __MIG_check__Reply__sm_report_subsystem__
#if !defined(__MIG_check__Reply__sm_report_t__defined)
#define __MIG_check__Reply__sm_report_t__defined

mig_internal kern_return_t __MIG_check__Reply__sm_report_t(__Reply__sm_report_t *Out0P)
{

	typedef __Reply__sm_report_t __Reply __attribute__((unused));
	if (Out0P->Head.msgh_id != 766) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__sm_report_t__defined) */
#endif /* __MIG_check__Reply__sm_report_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine sm_report */
mig_external kern_return_t sm_report
(
	mach_port_t server_port,
	task_t task,
	int32_t do_stacktrace,
	int32_t pid,
	uint64_t tid,
	sm_filename_t log_file,
	sm_path_t proc_path,
	sm_report_t report
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int32_t do_stacktrace;
		int32_t pid;
		uint64_t tid;
		mach_msg_type_number_t log_fileOffset; /* MiG doesn't use it */
		mach_msg_type_number_t log_fileCnt;
		char log_file[1024];
		mach_msg_type_number_t proc_pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t proc_pathCnt;
		char proc_path[1024];
		mach_msg_type_number_t reportOffset; /* MiG doesn't use it */
		mach_msg_type_number_t reportCnt;
		char report[2048];
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__sm_report_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__sm_report_t__defined */

	__DeclareSendRpc(666, "sm_report")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t taskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->task = taskTemplate;
	InP->task.name = task;
#else	/* UseStaticTemplates */
	InP->task.name = task;
	InP->task.disposition = 19;
	InP->task.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->do_stacktrace = do_stacktrace;

	InP->pid = pid;

	InP->tid = tid;

	InP->log_fileCnt = mig_strncpy(InP->log_file, log_file, 1024);

	msgh_size_delta = _WALIGN_(InP->log_fileCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4096) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->proc_pathCnt = mig_strncpy(InP->proc_path, proc_path, 1024);

	msgh_size_delta = _WALIGN_(InP->proc_pathCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->reportCnt = mig_strncpy(InP->report, report, 2048);

	msgh_size += _WALIGN_(InP->reportCnt);
	InP = &Mess.In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 666;

	__BeforeSendRpc(666, "sm_report")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, msgh_size, (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(666, "sm_report")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__sm_report_t__defined)
	check_result = __MIG_check__Reply__sm_report_t((__Reply__sm_report_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__sm_report_t__defined) */

	return KERN_SUCCESS;
}
