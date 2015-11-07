/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface HSSetupCodeGlyphView : UIView {

	unsigned _style;

}

@property (assign,nonatomic) unsigned style;              //@synthesize style=_style - In the implementation block
+(id)glyphViewForStyle:(unsigned)arg1 ;
-(void)transitionToStyle:(unsigned)arg1 pulse:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)_viewForStyle:(unsigned)arg1 ;
-(void)_prepareConstraintsForView:(id)arg1 ;
-(id)_logoImageView;
-(id)_successImageView;
-(id)_failureImageView;
-(id)_activityIndicatorView;
-(id)init;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(void)pulse;
@end
