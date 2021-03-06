/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PXLayoutPerformerOutput, NSArray;


@protocol PXLayoutPerformer
@property (assign,nonatomic) SCD_Struct_PX30 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
@property (nonatomic,readonly) NSArray * children; 
@required
+(CGSize*)performLayoutWithLayoutInput:(SCD_Struct_PX30)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(NSArray *)children;
-(void)prepareForReuse;
-(CGSize*)performLayout;
-(SCD_Struct_PX30)layoutInput;
-(void)setLayoutInput:(SCD_Struct_PX30)arg1;
-(PXLayoutPerformerOutput *)layoutOutput;
-(void)setLayoutOutput:(id)arg1;

@end

