/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class GKAchievement;

@interface GKAchievementIconView : UIImageView {

	BOOL _isDetail;
	GKAchievement* _achievement;
	GKAchievement* _localAchievement;

}

@property (nonatomic,retain) GKAchievement * achievement;                   //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;              //@synthesize localAchievement=_localAchievement - In the implementation block
@property (assign,nonatomic) BOOL isDetail;                                 //@synthesize isDetail=_isDetail - In the implementation block
+(id)progressSourceDetail;
+(id)progressSource;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(GKAchievement *)achievement;
-(void)setLocalAchievement:(GKAchievement *)arg1 ;
-(void)configureImage;
-(double)progressForAchievement:(id)arg1 ;
-(BOOL)isDetail;
-(id)processProgressImage:(id)arg1 forAchievement:(id)arg2 ;
-(id)progressIdentifierForAchievement:(id)arg1 ;
-(void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setupForAchievement:(id)arg1 localAchievement:(id)arg2 ;
-(void)setIsDetail:(BOOL)arg1 ;
-(GKAchievement *)localAchievement;
@end
