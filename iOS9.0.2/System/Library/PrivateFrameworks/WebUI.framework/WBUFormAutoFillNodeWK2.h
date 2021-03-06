/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <libobjc.A.dylib/WBSFormAutoFillNode.h>

@class WKWebProcessPlugInNodeHandle, NSString;

@interface WBUFormAutoFillNodeWK2 : NSObject <WBSFormAutoFillNode> {

	WKWebProcessPlugInNodeHandle* _nodeHandle;

}

@property (nonatomic,readonly) WKWebProcessPlugInNodeHandle * nodeHandle;              //@synthesize nodeHandle=_nodeHandle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillNodeWithNodeHandle:(id)arg1 ;
-(WKWebProcessPlugInNodeHandle *)nodeHandle;
-(void)setHTMLInputElementAutofilled:(char)arg1 ;
-(char)isHTMLInputElementUserEdited;
-(char)isHTMLTextAreaElementUserEdited;
-(CGRect)elementBounds;
-(id)initWithNodeHandle:(id)arg1 ;
-(id)initWithJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
@end

