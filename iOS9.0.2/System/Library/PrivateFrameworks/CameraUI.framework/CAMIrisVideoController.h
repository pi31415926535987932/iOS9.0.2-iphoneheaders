/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CAMNebulaDaemonProxyManager, NSMutableDictionary;

@interface CAMIrisVideoController : NSObject {

	NSObject*<OS_dispatch_queue> __mutexQueue;
	CAMNebulaDaemonProxyManager* __nebulaDaemonProxyManager;
	NSMutableDictionary* __mutexQueue_pendingJobsByMasterVideoURL;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _mutexQueue;                                   //@synthesize _mutexQueue=__mutexQueue - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * _nebulaDaemonProxyManager;                    //@synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _mutexQueue_pendingJobsByMasterVideoURL;              //@synthesize _mutexQueue_pendingJobsByMasterVideoURL=__mutexQueue_pendingJobsByMasterVideoURL - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)_mutexQueue;
-(id)initWithNebulaDaemonProxyManager:(id)arg1 ;
-(NSMutableDictionary *)_mutexQueue_pendingJobsByMasterVideoURL;
-(void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2 ;
-(CAMNebulaDaemonProxyManager *)_nebulaDaemonProxyManager;
@end
