/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKContainerID;

@interface CKDAppContainerTuple : NSObject <NSCopying> {

	NSString* _applicationBundleID;
	NSString* _sourceApplicationBundleID;
	CKContainerID* _containerID;

}

@property (nonatomic,retain) NSString * applicationBundleID;                    //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleID;              //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
@property (nonatomic,retain) CKContainerID * containerID;                       //@synthesize containerID=_containerID - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationBundleID;
-(id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2 ;
-(id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerID:(id)arg3 ;
-(id)CKPropertiesDescription;
-(NSString *)sourceApplicationBundleID;
-(id)pushTokenBundleID;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(CKContainerID *)containerID;
@end
