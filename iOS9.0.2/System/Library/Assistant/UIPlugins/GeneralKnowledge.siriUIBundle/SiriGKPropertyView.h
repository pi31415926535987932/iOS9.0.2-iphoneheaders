/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UILabel;

@interface SiriGKPropertyView : SiriGKView {

	UILabel* _leftLabel;
	UILabel* _rightLabel;

}
-(float)_lineHeight;
-(id)initWithAnswerProperty:(id)arg1 ;
-(id)_labelFontForHighlighted:(char)arg1 ;
-(float)_bottomMargin;
-(id)_decoratedString:(id)arg1 forRegions:(id)arg2 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 setFrames:(char)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
