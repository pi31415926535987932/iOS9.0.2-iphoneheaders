/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/TouchAccommodations.axuiservice/TouchAccommodations
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchAccommodations/TouchAccommodations-Structs.h>
#import <UIKit/UIViewController.h>

@class CATransformLayer;

@interface AXTouchAccommodationsViewController : UIViewController {

	CATransformLayer* _transformLayer;

}
-(void)removeAllHandTouchMarkers;
-(void)updateLocationOfHandTouchMarkerAtPoints:(id)arg1 ;
-(void)resetProgressTrackOfHandTouchMarkerAtPoints:(id)arg1 ;
-(id)_createProgressLayerWithColor:(id)arg1 withFilterName:(id)arg2 forHoldDuration:(char)arg3 ;
-(id)_createLayerAtPoint:(CGPoint)arg1 ;
-(id)_createTransformLayerForHoldDuration:(char)arg1 ;
-(CGPathRef)_drawFullCircleWithRadius:(float)arg1 ;
-(void)viewDidLoad;
@end
