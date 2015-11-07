/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol IKJSDOMLSInput <JSExport>
@property (nonatomic,retain) id byteStream; 
@property (nonatomic,retain) NSString * stringData; 
@property (nonatomic,retain) NSString * encoding; 
@property (assign,nonatomic) char certifiedText; 
@required
-(NSString *)stringData;
-(id)byteStream;
-(void)setStringData:(id)arg1;
-(char)certifiedText;
-(void)setCertifiedText:(char)arg1;
-(NSString *)encoding;
-(void)setByteStream:(id)arg1;
-(void)setEncoding:(id)arg1;

@end
