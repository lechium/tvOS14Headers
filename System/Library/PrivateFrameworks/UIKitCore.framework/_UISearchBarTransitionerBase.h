/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UISearchBarLayout, UIView, _UISearchBarTransitionContext;

@interface _UISearchBarTransitionerBase : NSObject {

	_UISearchBarLayout* _activeLayout;
	UIView* _searchBar;
	_UISearchBarTransitionContext* _transitionContext;

}

@property (nonatomic,__weak,readonly) UIView * searchBar;                                    //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) _UISearchBarTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) _UISearchBarLayout * activeLayout;                            //@synthesize activeLayout=_activeLayout - In the implementation block
-(id)init;
-(void)cancel;
-(void)complete;
-(_UISearchBarTransitionContext *)transitionContext;
-(void)setTransitionContext:(_UISearchBarTransitionContext *)arg1 ;
-(void)prepare;
-(UIView *)searchBar;
-(void)animate;
-(_UISearchBarLayout *)activeLayout;
-(id)initWithTransitionContext:(id)arg1 forSearchBar:(id)arg2 ;
-(id)initWithNewTransitionContextForSearchBar:(id)arg1 ;
@end

