/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject {

	int _format;
	int _singleThumbnailImageLength;
	unsigned _count;
	char _dataIsMutable;
	NSData* _thumbnailData;
	NSMutableArray* _thumbnailImages;
	NSMutableDictionary* _options;
	NSData* _optionsData;
	char _optionsAccessed;
	char _missingHeader;
	CGSize _size;

}

@property (nonatomic,readonly) int format; 
@property (nonatomic,retain,readonly) NSMutableDictionary * options; 
@property (nonatomic,retain,readonly) NSData * optionsData; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) int bitsPerComponent; 
@property (nonatomic,readonly) int bytesPerPixel; 
@property (nonatomic,readonly) unsigned bitmapInfo; 
@property (nonatomic,readonly) CGRect imageRect; 
+(id)thumbnailsWithContentsOfFile:(id)arg1 format:(int)arg2 ;
+(char)saveBakedThumbnailsOfImages:(id)arg1 toFile:(id)arg2 format:(int)arg3 orientation:(int*)arg4 options:(id)arg5 delegate:(id)arg6 ;
-(int)format;
-(CGSize)size;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(int)bitsPerComponent;
-(NSMutableDictionary *)options;
-(id)initWithImages:(id)arg1 format:(int)arg2 orientation:(int*)arg3 options:(id)arg4 delegate:(id)arg5 ;
-(id)thumbnailDataAtIndex:(int)arg1 ;
-(int)bytesPerPixel;
-(id)initWithContentsOfFile:(id)arg1 format:(int)arg2 readOnly:(char)arg3 ;
-(char)saveToFile:(id)arg1 ;
-(id)initWithData:(id)arg1 format:(int)arg2 readOnly:(char)arg3 ;
-(char)writeBorderedThumbnailOfImage:(CGImageRef)arg1 toBuffer:(void*)arg2 orientation:(int*)arg3 format:(int)arg4 formatInfo:(const SCD_Struct_PL18*)arg5 delegate:(id)arg6 ;
-(id)_thumbnailData;
-(id)serializedData;
-(char*)thumbnailBytesAtIndex:(int)arg1 ;
-(unsigned)bitmapInfo;
-(id)initWithData:(id)arg1 format:(int)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 format:(int)arg2 ;
-(unsigned long)thumbnailLength;
-(CGImageRef)thumbnailImageAtIndex:(int)arg1 ;
-(NSData *)optionsData;
-(CGRect)imageRect;
@end
