/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <Videos/VideosTableViewCell.h>

@class UIImageView, NSLayoutConstraint, MPButton, UILabel;

@interface VideosTVEpisodeTableViewCell : VideosTableViewCell {

	UIImageView* _unplayedIndicatorView;
	char _expansionTextLabelVerticalInsetsEnabled;
	NSLayoutConstraint* _expansionButtonTitleLabelBaselineConstraint;
	NSLayoutConstraint* _expansionTextLabelBottomConstraint;
	NSLayoutConstraint* _expansionTextLabelTopConstraint;
	NSLayoutConstraint* _expansionTextLabelAnimatingHeightConstraint;
	NSLayoutConstraint* _expansionTextLabelAnimatingTopConstraint;
	NSLayoutConstraint* _expansionViewAnimatingHeightConstraint;
	float _expansionTextLabelFinalTopConstant;
	float _expansionViewFinalHeightConstant;
	MPButton* _expansionButton;
	UILabel* _expansionTextLabel;
	/*^block*/id _expansionButtonActionBlock;
	int _playedState;

}

@property (nonatomic,readonly) MPButton * expansionButton;                //@synthesize expansionButton=_expansionButton - In the implementation block
@property (nonatomic,readonly) UILabel * expansionTextLabel;              //@synthesize expansionTextLabel=_expansionTextLabel - In the implementation block
@property (nonatomic,copy) id expansionButtonActionBlock;                 //@synthesize expansionButtonActionBlock=_expansionButtonActionBlock - In the implementation block
@property (assign,nonatomic) int playedState;                             //@synthesize playedState=_playedState - In the implementation block
-(void)_expansionButtonAction:(id)arg1 ;
-(UIEdgeInsets)_expansionTextLabelInsets;
-(id)expansionButtonActionBlock;
-(void)_replaceRegularVerticalConstraintsOnExpansionTextLabelWithAnimatingConstraints;
-(void)_setExpansionTextLabelVerticalInsetsEnabled:(char)arg1 ;
-(MPButton *)expansionButton;
-(void)_replaceAnimatingVerticalConstraintsOnExpansionTextLabelWithRegularConstraints;
-(void)setPlayedState:(int)arg1 ;
-(void)willBeginExpansionAnimation;
-(void)animateExpansion;
-(void)didCompleteExpansionAnimation;
-(void)willBeginShrinkingAnimation;
-(void)animateShrinking;
-(void)didCompleteShrinkingAnimation;
-(UILabel *)expansionTextLabel;
-(void)setExpansionButtonActionBlock:(id)arg1 ;
-(int)playedState;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(id)viewsToCenterVerticallyInContentView;
@end
