/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptBalloonCell.h>

@class CKSpeakerButton;

@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell {

	char _speakerEnabled;
	char _shouldShowText;
	CKSpeakerButton* _speakerButton;

}

@property (assign,getter=isSpeakerEnabled,nonatomic) char speakerEnabled;              //@synthesize speakerEnabled=_speakerEnabled - In the implementation block
@property (assign,getter=isSpeakerHidden,nonatomic) char speakerHidden; 
@property (nonatomic,retain) CKSpeakerButton * speakerButton;                          //@synthesize speakerButton=_speakerButton - In the implementation block
@property (assign,nonatomic) char shouldShowText;                                      //@synthesize shouldShowText=_shouldShowText - In the implementation block
-(void)dealloc;
-(void)setOrientation:(char)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(CKSpeakerButton *)speakerButton;
-(void)setSpeakerHidden:(char)arg1 ;
-(void)setSpeakerEnabled:(char)arg1 ;
-(char)isSpeakerHidden;
-(char)isSpeakerEnabled;
-(void)setSpeakerButton:(CKSpeakerButton *)arg1 ;
-(char)shouldShowText;
-(void)setShouldShowText:(char)arg1 ;
@end

