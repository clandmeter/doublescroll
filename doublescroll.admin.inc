<?php

/**
 * Callback function for admin settings form
 */
function doublescroll_settings_form() {
    $form['doublescroll_selector'] = array(
        '#type' => 'textfield',
        '#title' => 'CSS Selector',
        '#description' => 'CSS Selector to apply the double scroll bar on.',
        '#default_value' => variable_get('doublescroll_selector', '.doublescroll'),
    );
    /*
     * We should implement pages to include/exclude similar like the
     * block configuration.
    $form['doublescroll_pages'] = array(
        '#type' => 'textarea',
        '#title' => 'Applied pages',
        '#description' => 'Pages to include doublescroll in',
        '#default_value' => variable_get('doublescroll_pages', ''),
    );
     */
    return system_settings_form($form);
}