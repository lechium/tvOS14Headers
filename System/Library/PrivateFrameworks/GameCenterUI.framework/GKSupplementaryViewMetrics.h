/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GKSupplementaryViewMetrics : NSObject <NSCopying> {

	BOOL _shouldPin;
	BOOL _hidden;
	BOOL _shouldUseGlobalIndexing;
	BOOL _shouldPinGlobal;
	double _desiredWidth;
	double _desiredHeight;
	NSString* _kind;
	Class _reusableViewClass;
	SEL _configurator;
	id _target;
	long long _animateWithSection;
	NSRange _globalSectionRange;

}

@property (assign,nonatomic) BOOL shouldUseGlobalIndexing;              //@synthesize shouldUseGlobalIndexing=_shouldUseGlobalIndexing - In the implementation block
@property (assign,nonatomic) BOOL shouldPinGlobal;                      //@synthesize shouldPinGlobal=_shouldPinGlobal - In the implementation block
@property (assign,nonatomic) NSRange globalSectionRange;                //@synthesize globalSectionRange=_globalSectionRange - In the implementation block
@property (assign,nonatomic) long long animateWithSection;              //@synthesize animateWithSection=_animateWithSection - In the implementation block
@property (assign,nonatomic) double desiredWidth;                       //@synthesize desiredWidth=_desiredWidth - In the implementation block
@property (assign,nonatomic) double desiredHeight;                      //@synthesize desiredHeight=_desiredHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldPin;                            //@synthesize shouldPin=_shouldPin - In the implementation block
@property (nonatomic,retain) NSString * kind;                           //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) Class reusableViewClass;                   //@synthesize reusableViewClass=_reusableViewClass - In the implementation block
@property (assign,nonatomic) SEL configurator;                          //@synthesize configurator=_configurator - In the implementation block
@property (assign,nonatomic) id target;                                 //@synthesize target=_target - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;               //@synthesize hidden=_hidden - In the implementation block
+(id)supplementaryMetrics;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setConfigurator:(SEL)arg1 ;
-(SEL)configurator;
-(double)desiredHeight;
-(id)localDescription;
-(void)setGlobalSectionRange:(NSRange)arg1 ;
-(Class)reusableViewClass;
-(void)setShouldPin:(BOOL)arg1 ;
-(void)setDesiredHeight:(double)arg1 ;
-(BOOL)shouldPin;
-(void)setDesiredWidth:(double)arg1 ;
-(void)setShouldPinGlobal:(BOOL)arg1 ;
-(void)setReusableViewClass:(Class)arg1 ;
-(void)setAnimateWithSection:(long long)arg1 ;
-(void)setShouldUseGlobalIndexing:(BOOL)arg1 ;
-(CGSize)sizeForCollectionView:(id)arg1 ;
-(double)desiredWidth;
-(BOOL)shouldUseGlobalIndexing;
-(BOOL)shouldPinGlobal;
-(NSRange)globalSectionRange;
-(long long)animateWithSection;
@end

