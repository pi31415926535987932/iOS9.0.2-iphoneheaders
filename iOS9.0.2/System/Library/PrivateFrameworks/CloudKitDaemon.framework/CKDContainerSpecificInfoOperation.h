/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@protocol OS_dispatch_group;
@class CKDContainerInfo, NSObject;

@interface CKDContainerSpecificInfoOperation : CKDOperation {

	char _needUserID;
	CKDContainerInfo* _containerInfo;
	NSObject*<OS_dispatch_group> _infoFetchedGroup;

}

@property (assign,nonatomic) char needUserID;                                              //@synthesize needUserID=_needUserID - In the implementation block
@property (nonatomic,copy) CKDContainerInfo * containerInfo;                               //@synthesize containerInfo=_containerInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> infoFetchedGroup;              //@synthesize infoFetchedGroup=_infoFetchedGroup - In the implementation block
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(unsigned long long)activityStart;
-(char)shouldCheckAppVersion;
-(char)needUserID;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(void)setNeedUserID:(char)arg1 ;
-(NSObject*<OS_dispatch_group>)infoFetchedGroup;
@end

