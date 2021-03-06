/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class UserFSItem, NSObject;

@interface UserFSStream : NSObject {

	UserFSItem* _item;
	NSObject*<OS_xpc_object> _connection;
	unsigned long long _length;

}

@property (nonatomic,retain) UserFSItem * item;                                //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) char writable; 
@property (assign,nonatomic) unsigned long long length;                        //@synthesize length=_length - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(char)writable;
-(void)dealloc;
-(UserFSItem *)item;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setItem:(UserFSItem *)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_cancelConnection;
-(long)readBytesOfLength:(unsigned long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4 ;
-(char)closeAndReturnError:(id*)arg1 ;
-(id)initWithUserFSItem:(id)arg1 length:(unsigned long long)arg2 connection:(id)arg3 ;
-(long)_readBytesUpToLength:(unsigned long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4 ;
@end

