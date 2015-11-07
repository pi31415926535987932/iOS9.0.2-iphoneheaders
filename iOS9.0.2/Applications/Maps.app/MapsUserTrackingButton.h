/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/_MKUserTrackingButton.h>
#import <Maps/MapsButtonMiniBarSupport.h>

@interface MapsUserTrackingButton : _MKUserTrackingButton <MapsButtonMiniBarSupport> {

	char _shouldInvertSelectionColor;
	char shouldInvertSelectionColor;

}

@property (assign) char shouldInvertSelectionColor; 
+(id)buttonWithUserTrackingView:(id)arg1 ;
-(void)setShouldInvertSelectionColor:(char)arg1 ;
-(void)updateSelectedTintColor;
-(char)shouldInvertSelectionColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(CGRect)_selectedIndicatorBounds;
-(void)setSelected:(char)arg1 ;
-(id)_selectedIndicatorViewWithImage:(id)arg1 ;
-(float)_selectedIndicatorAlpha;
@end
