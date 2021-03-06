/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SiriUISuggestionsViewDelegate;
@class UILabel, NSArray, NSTimer, NSMutableOrderedSet, SiriUIAcousticIDSpinner, NSString, UIColor;

@interface SiriUISuggestionsView : UIView {

	UILabel* _headerLabel;
	UILabel* _oldHeaderLabel;
	UILabel* _subheaderLabel;
	UILabel* _largeSubheaderLabel;
	NSArray* _suggestionLabels;
	NSArray* _oldSuggestionLabels;
	char _firstSuggestionPresentation;
	NSTimer* _updateSuggestionsTimer;
	NSMutableOrderedSet* _pendedSuggestions;
	SiriUIAcousticIDSpinner* _acousticIDSpinner;
	unsigned _numberOfSuggestions;
	NSString* _headerText;
	NSString* _subheaderText;
	NSString* _largeSubheaderText;
	UIColor* _textColor;
	id<SiriUISuggestionsViewDelegate> _delegate;
	int _orientation;
	CGPoint _contentOffset;

}

@property (nonatomic,copy) NSString * headerText;                                            //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) NSString * subheaderText;                                         //@synthesize subheaderText=_subheaderText - In the implementation block
@property (nonatomic,copy) NSString * largeSubheaderText;                                    //@synthesize largeSubheaderText=_largeSubheaderText - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                              //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset;                                          //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISuggestionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int orientation;                                                //@synthesize orientation=_orientation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SiriUISuggestionsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SiriUISuggestionsViewDelegate>)delegate;
-(CGPoint)contentOffset;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(UIColor *)textColor;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)acousticIDSpinnerDidHide:(id)arg1 ;
-(float)_headerFontSize;
-(float)_subheaderFontSize;
-(float)_largeSubheaderFontSize;
-(float)_suggestionFontSize;
-(float)_headerToSubheaderOffset;
-(float)_headerToLargeSubheaderOffset;
-(float)_suggestionSpacing;
-(double)_updateSuggestionsDelay;
-(void)_animateHeaderOut;
-(void)_animateHeaderIn;
-(void)_loadSubheaderViewIfNeeded;
-(void)_loadLargeSubheaderViewIfNeeded;
-(void)_loadSuggestionsViewsIfNeeded;
-(void)_animateOutSuggestionAtIndex:(unsigned)arg1 ;
-(void)_animateInSuggestionAtIndex:(unsigned)arg1 ;
-(void)_updateSuggestions;
-(void)_setSuggestionTexts:(id)arg1 ;
-(void)stopSuggesting;
-(void)clearCurrentSuggestions;
-(void)_reallyShowAcousticIDSpinner;
-(unsigned)_numberOfSuggestionsToDisplay;
-(char)_isPortrait;
-(int)_heightType;
-(char)_isPadHeightType;
-(void)setSubheaderText:(NSString *)arg1 ;
-(void)setLargeSubheaderText:(NSString *)arg1 ;
-(void)startSuggesting;
-(char)isShowingSuggestions;
-(void)showAcousticIDSpinner;
-(void)hideAcousticIDSpinner;
-(NSString *)subheaderText;
-(NSString *)largeSubheaderText;
@end

