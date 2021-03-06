/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSRecursiveLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(char)lockBeforeDate:(id)arg1 ;
-(char)tryLock;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)lock;
-(void)unlock;
-(char)isLockedByMe;
@end

