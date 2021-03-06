/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@protocol UICollisionBehaviorDelegate;
@class PKExtendedPhysicsBody, NSMutableDictionary, NSArray;

@interface UICollisionBehavior : UIDynamicBehavior {

	char _usesImplicitBounds;
	UIEdgeInsets _implicitBoundsInsets;
	PKExtendedPhysicsBody* _implicitBoundsBody;
	NSMutableDictionary* _boundaryBodies;
	NSMutableDictionary* _boundaryPaths;
	unsigned _collisionMode;
	id<UICollisionBehaviorDelegate> _collisionDelegate;
	unsigned _groupVID;
	unsigned _groupBID;
	struct {
		unsigned delegateBeganWithItem : 1;
		unsigned delegateEndedWithItem : 1;
		unsigned delegateBeganWithBoundary : 1;
		unsigned delegateEndedWithBoundary : 1;
	}  _collisionBehaviorFlags;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) unsigned collisionMode; 
@property (assign,nonatomic) char translatesReferenceBoundsIntoBoundary; 
@property (nonatomic,copy,readonly) NSArray * boundaryIdentifiers; 
@property (assign,nonatomic,__weak) id<UICollisionBehaviorDelegate> collisionDelegate; 
+(char)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(void)removeItem:(id)arg1 ;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 ;
-(void)setCollisionDelegate:(id<UICollisionBehaviorDelegate>)arg1 ;
-(void)_reevaluate:(unsigned)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)_addItem:(id)arg1 ;
-(id<UICollisionBehaviorDelegate>)collisionDelegate;
-(void)_didBeginContact:(id)arg1 ;
-(void)_didEndContact:(id)arg1 ;
-(void)_setCollisions:(char)arg1 forBody:(id)arg2 isEdge:(char)arg3 ;
-(unsigned)collisionMode;
-(void)_setupImplicitBoundaries;
-(void)_applySettings;
-(void)_setupExplicitBoundaries;
-(void)_removeImplicitBoundaries;
-(void)_removeExplicitBoundaries;
-(void)_setTranslatesReferenceItemBounds:(char)arg1 intoBoundaryWithInsets:(UIEdgeInsets)arg2 ;
-(char)translatesReferenceBoundsIntoBoundary;
-(void)setCollisionMode:(unsigned)arg1 ;
-(void)setTranslatesReferenceBoundsIntoBoundary:(char)arg1 ;
-(void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(UIEdgeInsets)arg1 ;
-(void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2 ;
-(id)boundaryWithIdentifier:(id)arg1 ;
-(void)removeBoundaryWithIdentifier:(id)arg1 ;
-(NSArray *)boundaryIdentifiers;
-(void)removeAllBoundaries;
@end

