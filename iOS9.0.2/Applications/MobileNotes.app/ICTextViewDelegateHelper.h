/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSelectorDelayer;

@interface ICTextViewDelegateHelper : NSObject {

	char _didPauseIndexingForEditing;
	char _textViewDidChange;
	ICSelectorDelayer* _unpauseIndexingForEditingDelayer;

}

@property (nonatomic,retain) ICSelectorDelayer * unpauseIndexingForEditingDelayer;              //@synthesize unpauseIndexingForEditingDelayer=_unpauseIndexingForEditingDelayer - In the implementation block
@property (assign,nonatomic) char didPauseIndexingForEditing;                                   //@synthesize didPauseIndexingForEditing=_didPauseIndexingForEditing - In the implementation block
@property (assign,nonatomic) char textViewDidChange;                                            //@synthesize textViewDidChange=_textViewDidChange - In the implementation block
-(ICSelectorDelayer *)unpauseIndexingForEditingDelayer;
-(void)unpauseIndexingForEditing;
-(char)textViewDidChange;
-(void)setTextViewDidChange:(char)arg1 ;
-(void)pauseIndexingForEditing;
-(char)didPauseIndexingForEditing;
-(void)setDidPauseIndexingForEditing:(char)arg1 ;
-(void)setUnpauseIndexingForEditingDelayer:(ICSelectorDelayer *)arg1 ;
-(void)setEditing:(char)arg1 note:(id)arg2 animated:(char)arg3 ;
-(void)dealloc;
-(void)textViewDidChange:(id)arg1 ;
@end
