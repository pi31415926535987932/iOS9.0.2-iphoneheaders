/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DATextFileEnumeratorControl.h>

@class NSFileHandle, NSMutableArray, NSData;

@interface DATextFile : NSObject <DATextFileEnumeratorControl> {

	char _cancelEnumeration;
	char _isEnumerating;
	NSFileHandle* _fileHandle;
	unsigned _bufferSize;
	NSMutableArray* _linePositions;
	NSData* _lineBreak;
	int _skipCount;
	unsigned _currentLineIndex;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;                   //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) unsigned bufferSize;                         //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * linePositions;              //@synthesize linePositions=_linePositions - In the implementation block
@property (nonatomic,retain) NSData * lineBreak;                          //@synthesize lineBreak=_lineBreak - In the implementation block
@property (assign,nonatomic) char cancelEnumeration;                      //@synthesize cancelEnumeration=_cancelEnumeration - In the implementation block
@property (assign,nonatomic) int skipCount;                               //@synthesize skipCount=_skipCount - In the implementation block
@property (assign,nonatomic) char isEnumerating;                          //@synthesize isEnumerating=_isEnumerating - In the implementation block
@property (assign,nonatomic) unsigned currentLineIndex;                   //@synthesize currentLineIndex=_currentLineIndex - In the implementation block
+(id)textFileWithPath:(id)arg1 ;
-(void)enumerateUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithFilePath:(id)arg1 withBufferSize:(unsigned)arg2 ;
-(void)setIsEnumerating:(char)arg1 ;
-(char)advanceToNextLine:(id*)arg1 ;
-(char)isEnumerating;
-(void)resetEnumerator;
-(void)setCurrentLineIndex:(unsigned)arg1 ;
-(NSMutableArray *)linePositions;
-(unsigned)currentLineIndex;
-(unsigned long long)getOffsetAtLineIndex:(unsigned)arg1 ;
-(id)extractLine:(unsigned)arg1 ;
-(char)searchForNextLineFromCurrentPosition:(id*)arg1 ;
-(void)skipWithLines:(int)arg1 ;
-(void)seekToBeginning;
-(void)setLinePositions:(NSMutableArray *)arg1 ;
-(char)cancelEnumeration;
-(void)setCancelEnumeration:(char)arg1 ;
-(unsigned long long)currentOffset;
-(int)skipCount;
-(void)setSkipCount:(int)arg1 ;
-(id)init;
-(void)end;
-(id)readDataOfLength:(unsigned)arg1 ;
-(id)initWithFilePath:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)setLineBreak:(NSData *)arg1 ;
-(NSData *)lineBreak;
-(unsigned)bufferSize;
-(void)seekToOffset:(unsigned long long)arg1 ;
-(void)setBufferSize:(unsigned)arg1 ;
@end

