/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@interface PLXPCShMemData : NSData {

	void* _buffer;
	unsigned long _dataLength;
	unsigned long _bufferLength;

}
-(void)dealloc;
-(id)description;
-(unsigned)length;
-(const void*)bytes;
-(id)initWithXPCShmem:(id)arg1 ;
-(id)initWithXPCShmem:(id)arg1 length:(long long)arg2 ;
@end
