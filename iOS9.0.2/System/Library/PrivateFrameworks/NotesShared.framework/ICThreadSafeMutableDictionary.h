/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICThreadSafeMutableDictionary : NSMutableDictionary {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _mutableDictionary;

}
-(id)initWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(id)keyEnumerator;
@end

