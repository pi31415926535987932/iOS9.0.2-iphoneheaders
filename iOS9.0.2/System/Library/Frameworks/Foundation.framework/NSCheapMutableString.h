/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSCheapMutableString : NSMutableString {

	SCD_Union_NS45* contents;
	fields flags;
	unsigned numCharacters;
	void* _reserved;

}
-(unsigned)fastestEncoding;
-(unsigned)cStringLength;
-(const char*)lossyCString;
-(void)setContentsNoCopy:(void*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 isUnicode:(char)arg4 ;
-(void)dealloc;
-(unsigned)length;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(char)getBytes:(void*)arg1 maxLength:(unsigned)arg2 usedLength:(unsigned*)arg3 encoding:(unsigned)arg4 options:(unsigned)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(const char*)cString;
-(void)finalize;
@end
