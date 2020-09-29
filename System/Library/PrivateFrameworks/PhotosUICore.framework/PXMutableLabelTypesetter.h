/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSAttributedString;


@protocol PXMutableLabelTypesetter
@property (nonatomic,copy) NSAttributedString * attributedString; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) long long typesettingMode; 
@property (assign,nonatomic) unsigned long long maximumNumberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (assign,nonatomic) BOOL allowTruncation; 
@property (assign,nonatomic) double minimumTruncatedScaleFactor; 
@required
-(void)setAttributedString:(id)arg1;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1;
-(NSAttributedString *)attributedString;
-(double)minimumScaleFactor;
-(void)setMinimumScaleFactor:(double)arg1;
-(unsigned long long)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
-(BOOL)adjustsFontSizeToFitWidth;
-(BOOL)allowTruncation;
-(void)setAllowTruncation:(BOOL)arg1;
-(double)minimumTruncatedScaleFactor;
-(void)setMinimumTruncatedScaleFactor:(double)arg1;
-(long long)typesettingMode;
-(void)setTypesettingMode:(long long)arg1;

@end

