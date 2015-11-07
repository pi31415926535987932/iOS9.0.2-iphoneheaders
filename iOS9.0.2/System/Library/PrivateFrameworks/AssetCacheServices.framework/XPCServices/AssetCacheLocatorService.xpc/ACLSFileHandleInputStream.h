/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/XPCServices/AssetCacheLocatorService.xpc/AssetCacheLocatorService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssetCacheLocatorService/AssetCacheLocatorService-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSFileHandle;

@interface ACLSFileHandleInputStream : NSInputStream {

	NSFileHandle* _fileHandle;
	unsigned _status;
	long long _fileOffset;
	long long _fileEndOffset;

}

@property (retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign) long long fileOffset;                   //@synthesize fileOffset=_fileOffset - In the implementation block
@property (assign) long long fileEndOffset;                //@synthesize fileEndOffset=_fileEndOffset - In the implementation block
@property (assign) unsigned status;                        //@synthesize status=_status - In the implementation block
-(void)setFileOffset:(long long)arg1 ;
-(long long)fileOffset;
-(id)initWithFileHandle:(id)arg1 fileOffset:(long long)arg2 length:(long long)arg3 ;
-(long long)fileEndOffset;
-(void)setFileEndOffset:(long long)arg1 ;
-(char)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(char)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_AC0*)arg3 ;
-(void)_scheduleInCFRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)close;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)open;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(unsigned)streamStatus;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(id)streamError;
@end
