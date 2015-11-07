/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface _PFEncodedData : NSData {

	NSData* _aData;
	unsigned _byteCount;

}
+(Class)classForCoder;
-(id)privateCopy;
-(Class)classForArchiver;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(id)description;
-(unsigned)length;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(char)writeToURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(id)mutableCopy;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(char)_isDeallocating;
-(char)writeToFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(char)isEqualToData:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
@end
