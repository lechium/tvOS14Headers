/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UICollectionSectionSolutionBookmark;

@interface _UICollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject {

	_UICollectionSectionSolutionBookmark* _bookmark;
	long long _originalSectionIndex;

}

@property (nonatomic,readonly) long long originalSectionIndex;              //@synthesize originalSectionIndex=_originalSectionIndex - In the implementation block
-(id)initWithBookmark:(id)arg1 originalSectionIndex:(long long)arg2 ;
-(long long)originalSectionIndex;
-(void)applyStateToBookmark:(id)arg1 ;
@end
